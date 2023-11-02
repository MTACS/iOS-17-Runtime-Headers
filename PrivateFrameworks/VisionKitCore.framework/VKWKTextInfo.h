
@interface VKWKTextInfo : NSObject {
    VKQuad * _quad;
    NSString * _string;
}

@property (nonatomic, retain) VKQuad *quad;
@property (nonatomic, retain) NSString *string;

- (void).cxx_destruct;
- (id)quad;
- (void)setQuad:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
