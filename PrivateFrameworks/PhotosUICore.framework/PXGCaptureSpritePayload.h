
@interface PXGCaptureSpritePayload : NSObject <NSCopying> {
    unsigned long long  _behavior;
}

@property (nonatomic, readonly) unsigned long long behavior;

- (unsigned long long)behavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBehavior:(unsigned long long)arg1;

@end
