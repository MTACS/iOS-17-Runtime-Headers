
@interface SBHIconRelativePath : NSObject <BSDescriptionProviding, NSCoding, NSCopying> {
    NSString * _folderIdentifier;
    unsigned long long  _gridCellInfoOptions;
    NSString * _listIdentifier;
    NSArray * _priorIconIdentifiers;
    NSArray * _subsequentIconIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *folderIdentifier;
@property (nonatomic, readonly) unsigned long long gridCellInfoOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *listIdentifier;
@property (nonatomic, readonly, copy) NSArray *priorIconIdentifiers;
@property (nonatomic, readonly, copy) NSArray *subsequentIconIdentifiers;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)folderIdentifier;
- (unsigned long long)gridCellInfoOptions;
- (unsigned long long)hash;
- (id)iconRelativePathWithFolderIdentifier:(id)arg1 listIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderIdentifier:(id)arg1 listIdentifier:(id)arg2 priorIconIdentifiers:(id)arg3 subsequentIconIdentifiers:(id)arg4 gridCellInfoOptions:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)listIdentifier;
- (id)priorIconIdentifiers;
- (id)subsequentIconIdentifiers;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
