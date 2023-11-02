
@interface SADialogInflectWordResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *print;
@property (nonatomic, copy) NSString *speak;

+ (id)inflectWordResponse;
+ (id)inflectWordResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)print;
- (bool)requiresResponse;
- (void)setPrint:(id)arg1;
- (void)setSpeak:(id)arg1;
- (id)speak;

@end
