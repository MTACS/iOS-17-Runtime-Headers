
@interface GDFactObjectEntityReference : NSObject <GDFactObject> {
    GDEntityIdentifier * _entityIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)entityIdentifier;
- (id)initWithEntityIdentifier:(id)arg1;

@end
