
@interface SXVideoFill : SXFill

@property (nonatomic, readonly) bool loop;
@property (nonatomic, readonly) NSString *resourceIdentifier;
@property (nonatomic, readonly) NSString *stillImageIdentifier;

- (bool)loopWithValue:(id)arg1 withType:(int)arg2;

@end
