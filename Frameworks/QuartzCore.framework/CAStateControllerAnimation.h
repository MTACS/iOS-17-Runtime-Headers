
@interface CAStateControllerAnimation : NSObject {
    NSString * _key;
    CALayer * _layer;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) CALayer *layer;

- (void)dealloc;
- (id)initWithLayer:(id)arg1 key:(id)arg2;
- (id)key;
- (id)layer;

@end
