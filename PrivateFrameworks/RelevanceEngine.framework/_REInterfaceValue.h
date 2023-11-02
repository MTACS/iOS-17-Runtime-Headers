
@interface _REInterfaceValue : NSObject {
    NSArray * _conformedInterfaces;
    NSHashTable * _conformedProtocols;
    NSMapTable * _methods;
    NSMapTable * _properties;
    _REInterfaceKey * _type;
}

@property (nonatomic, retain) NSArray *conformedInterfaces;
@property (nonatomic, retain) NSHashTable *conformedProtocols;
@property (nonatomic, retain) NSMapTable *methods;
@property (nonatomic, retain) NSMapTable *properties;
@property (nonatomic, retain) _REInterfaceKey *type;

- (void).cxx_destruct;
- (id)conformedInterfaces;
- (id)conformedProtocols;
- (id)methods;
- (id)properties;
- (void)setConformedInterfaces:(id)arg1;
- (void)setConformedProtocols:(id)arg1;
- (void)setMethods:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
