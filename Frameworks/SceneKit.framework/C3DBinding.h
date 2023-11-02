
@interface C3DBinding : NSObject {
    NSString * keyPathDst;
    NSString * keyPathSrc;
    NSDictionary * options;
    id  sourceObject;
}

@property (nonatomic, retain) NSString *keyPathDst;
@property (nonatomic, retain) NSString *keyPathSrc;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, retain) id sourceObject;

- (void)dealloc;
- (id)keyPathDst;
- (id)keyPathSrc;
- (id)options;
- (void)setKeyPathDst:(id)arg1;
- (void)setKeyPathSrc:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSourceObject:(id)arg1;
- (id)sourceObject;

@end
