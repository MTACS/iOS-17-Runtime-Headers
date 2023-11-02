
@interface AXKonaSpeechSegment : NSObject {
    char * _latin1String;
    unsigned long long  _latin1StringLength;
    AXKonaMarker * _marker;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _text;
}

@property (nonatomic) unsigned long long latin1StringLength;
@property (nonatomic, retain) AXKonaMarker *marker;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *text;

+ (id)encodingReplacements;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (char *)latin1String;
- (unsigned long long)latin1StringLength;
- (id)marker;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setLatin1StringLength:(unsigned long long)arg1;
- (void)setMarker:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
