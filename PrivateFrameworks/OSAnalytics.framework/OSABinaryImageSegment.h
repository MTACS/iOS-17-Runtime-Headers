
@interface OSABinaryImageSegment : NSObject {
    int  _source;
    OSASymbolInfo * _symbolInfo;
    unsigned long long  _used_index;
}

@property int source;
@property (nonatomic, readonly) OSASymbolInfo *symbolInfo;
@property unsigned long long used_index;

- (void).cxx_destruct;
- (id)details;
- (id)full_details;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3;
- (id)initWithSymbol:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setUsed_index:(unsigned long long)arg1;
- (int)source;
- (id)symbolInfo;
- (unsigned long long)used_index;

@end
