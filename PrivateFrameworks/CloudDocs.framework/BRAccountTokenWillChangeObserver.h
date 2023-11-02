
@interface BRAccountTokenWillChangeObserver : NSObject {
    NSString * _personaID;
}

@property (nonatomic, readonly) NSString *personaID;

- (void).cxx_destruct;
- (void)_accountWillChange;
- (id)initWithPersonaID:(id)arg1;
- (id)personaID;

@end
