
@interface HVHtmlParser : NSObject {
    NSMutableArray * _activeRegionIndexSetStack;
    NSMutableArray * _activeRegionStartPositionStack;
    NSHashTable * _activeRegions;
    NSMutableSet * _appleAnchorHrefs;
    unsigned long long  _bytesConsumedInPreviousPasses;
    unsigned long long  _chunkLength;
    const char * _chunkStart;
    NSMutableData * _currentLineData;
    bool  _currentLineIsCollapsed;
    unsigned long long  _depth;
    NSMutableIndexSet * _depthsWithActiveRegions;
    NSMutableIndexSet * _hyperlinkDepths;
    NSMutableArray * _hyperlinkRanges;
    NSMutableArray * _hyperlinkURLs;
    NSArray * _hyperlinks;
    NSMutableArray * _mutablePlainTextLines;
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; } * _parserContext;
    NSMutableArray * _partialHyperlinks;
    NSString * _plainTextContent;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _plainTextContentLock;
    NSArray * _plainTextLines;
    unsigned long long  _plainTextLinesTotalLength;
    bool  _preBlockDepth;
    unsigned long long  _quoteToEndFromPosition;
    NSMutableIndexSet * _quotedRegions;
    bool  _renderingSuspended;
    NSMutableIndexSet * _sigHtmlBlockRegions;
    NSMutableIndexSet * _tabularRegions;
}

@property (nonatomic, readonly) NSSet *appleAnchorHrefs;
@property (nonatomic, readonly) NSArray *hyperlinks;
@property (nonatomic, readonly) NSIndexSet *quotedRegions;
@property (nonatomic, readonly) NSIndexSet *signatureRegions;
@property (nonatomic, readonly) NSIndexSet *tabularRegions;
@property (nonatomic, readonly) NSString *textContent;
@property (nonatomic, readonly) NSArray *textLines;

- (void).cxx_destruct;
- (id)appleAnchorHrefs;
- (void)dealloc;
- (id)hyperlinks;
- (id)init;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithUTF8DataEnumerator:(id)arg1;
- (id)quotedRegions;
- (id)signatureRegions;
- (id)tabularRegions;
- (id)textContent;
- (id)textLines;

@end
