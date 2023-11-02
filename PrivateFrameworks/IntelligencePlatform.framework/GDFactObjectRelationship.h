
@interface GDFactObjectRelationship : NSObject <GDFactObject> {
    GDSubentity * _subentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GDSubentity *subentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSubentity:(id)arg1;
- (id)subentity;

@end
