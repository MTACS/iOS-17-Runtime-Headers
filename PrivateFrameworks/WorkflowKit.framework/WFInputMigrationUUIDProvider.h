
@interface WFInputMigrationUUIDProvider : NSObject <WFUUIDProvider> {
    WFAction * _action;
    unsigned long long  _position;
}

@property (nonatomic, readonly) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long position;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)generateOutputUUIDForAction:(id)arg1;
- (id)initWithAction:(id)arg1 atPosition:(unsigned long long)arg2;
- (unsigned long long)position;

@end
