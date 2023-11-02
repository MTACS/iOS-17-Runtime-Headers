
@interface NBURLCanonicalizer : NSObject {
    NBObjCURLCanonicalizer * _canonicalizer;
}

@property (nonatomic, readonly) NBObjCURLCanonicalizer *canonicalizer;

- (void).cxx_destruct;
- (id)canonicalizedURLForURL:(id)arg1;
- (id)canonicalizer;
- (id)init;

@end
