
@interface LAPSPasscode : NSObject {
    NSString * _passcode;
    LAPSPasscodeType * _type;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *passcode;
@property (nonatomic, readonly) LAPSPasscodeType *type;

+ (id)emptyPasscode;

- (void).cxx_destruct;
- (id)data;
- (id)externalizePasscode;
- (id)initWithLocalizedPasscode:(id)arg1 type:(id)arg2;
- (id)initWithPasscode:(id)arg1;
- (id)initWithPasscode:(id)arg1 type:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)passcode;
- (id)type;

@end
