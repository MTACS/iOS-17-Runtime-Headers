
@interface CRKClassKitIconID : NSObject {
    NSString * _colorIdentifier;
    NSString * _mascotIdentifier;
}

@property (nonatomic, copy) NSString *colorIdentifier;
@property (nonatomic, copy) NSString *mascotIdentifier;
@property (nonatomic, readonly, copy) NSString *stringValue;

+ (id)stringBySanitizingString:(id)arg1;

- (void).cxx_destruct;
- (id)colorIdentifier;
- (id)init;
- (id)initWithClass:(id)arg1;
- (id)initWithIconID:(id)arg1;
- (id)initWithMascotIdentifier:(id)arg1 colorIdentifier:(id)arg2;
- (id)mascotIdentifier;
- (void)setColorIdentifier:(id)arg1;
- (void)setMascotIdentifier:(id)arg1;
- (id)stringValue;

@end
