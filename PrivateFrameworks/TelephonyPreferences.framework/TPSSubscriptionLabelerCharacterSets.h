
@interface TPSSubscriptionLabelerCharacterSets : NSObject {
    struct USet { } * _CJK;
}

@property (nonatomic, readonly) struct USet { }*CJK;

+ (struct USet { }*)_characterSetFromPattern:(id)arg1;

- (struct USet { }*)CJK;
- (void)dealloc;
- (id)init;

@end
