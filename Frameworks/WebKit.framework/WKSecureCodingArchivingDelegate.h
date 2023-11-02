
@interface WKSecureCodingArchivingDelegate : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate> {
    bool  rewriteMutableArray;
    bool  rewriteMutableData;
    bool  rewriteMutableDictionary;
    bool  rewriteMutableString;
    bool  transformURLs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool rewriteMutableArray;
@property (nonatomic) bool rewriteMutableData;
@property (nonatomic) bool rewriteMutableDictionary;
@property (nonatomic) bool rewriteMutableString;
@property (readonly) Class superclass;
@property (nonatomic) bool transformURLs;

- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)init;
- (bool)rewriteMutableArray;
- (bool)rewriteMutableData;
- (bool)rewriteMutableDictionary;
- (bool)rewriteMutableString;
- (void)setRewriteMutableArray:(bool)arg1;
- (void)setRewriteMutableData:(bool)arg1;
- (void)setRewriteMutableDictionary:(bool)arg1;
- (void)setRewriteMutableString:(bool)arg1;
- (void)setTransformURLs:(bool)arg1;
- (bool)transformURLs;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

@end
