
@interface RWIDriverState : NSObject <NSCopying> {
    bool  _active;
    NSSet * _sessionIdentifiers;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) NSSet *sessionIdentifiers;

+ (id)active;
+ (id)decodeFromPayload:(id)arg1;
+ (id)inactive;
+ (bool)isValidPayload:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeToPayload:(id)arg1;
- (id)init;
- (bool)isActive;
- (id)sessionIdentifiers;
- (void)setActive:(bool)arg1;
- (void)setSessionIdentifiers:(id)arg1;

@end
