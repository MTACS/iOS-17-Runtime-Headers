
@interface SBHIconGridPath : NSObject <BSDescriptionProviding, NSCoding, NSCopying> {
    NSString * _folderIdentifier;
    unsigned long long  _gridCellIndex;
    unsigned long long  _gridCellInfoOptions;
    NSString * _listIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *folderIdentifier;
@property (nonatomic, readonly) unsigned long long gridCellIndex;
@property (nonatomic, readonly) unsigned long long gridCellInfoOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *listIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)folderIdentifier;
- (unsigned long long)gridCellIndex;
- (unsigned long long)gridCellInfoOptions;
- (unsigned long long)hash;
- (id)iconGridPathWithGridCellIndex:(unsigned long long)arg1;
- (id)iconGridPathWithListIdentifier:(id)arg1 gridCellIndex:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderIdentifier:(id)arg1 listIdentifier:(id)arg2 gridCellIndex:(unsigned long long)arg3 gridCellInfoOptions:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)listIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
