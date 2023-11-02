
@interface PKGroupsControllerSnapshot : NSObject <NSSecureCoding> {
    NSDictionary * _annotationsByPassUniqueID;
    PKCatalog * _catalog;
    NSSet * _passes;
}

@property (nonatomic, readonly) NSDictionary *annotationsByPassUniqueID;
@property (nonatomic, readonly) PKCatalog *catalog;
@property (nonatomic, readonly) NSSet *passes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)annotationsByPassUniqueID;
- (id)catalog;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasses:(id)arg1 annotationsByPassUniqueID:(id)arg2 catalog:(id)arg3;
- (id)passes;

@end
