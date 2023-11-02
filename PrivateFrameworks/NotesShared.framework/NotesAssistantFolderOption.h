
@interface NotesAssistantFolderOption : NSObject {
    NSString * _accountIdentifier;
    NSString * _accountTitle;
    NSString * _fullTitle;
    NSString * _identifierURIPathComponent;
    NSManagedObjectID * _managedObjectID;
    NSString * _parentTitle;
    NSString * _title;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, retain) NSString *accountTitle;
@property (nonatomic, retain) NSString *fullTitle;
@property (nonatomic, retain) NSString *identifierURIPathComponent;
@property (nonatomic, retain) NSManagedObjectID *managedObjectID;
@property (nonatomic, retain) NSString *parentTitle;
@property (nonatomic, retain) NSString *title;

+ (void)disambiguateFolderOptions:(id)arg1;
+ (void)disambiguateSameTitleFolderOptions:(id)arg1;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)accountTitle;
- (id)debugDescription;
- (id)fullTitle;
- (id)identifierURIPathComponent;
- (id)initWithLegacyFolder:(id)arg1;
- (id)initWithModernFolder:(id)arg1;
- (id)managedObjectID;
- (id)parentTitle;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountTitle:(id)arg1;
- (void)setFullTitle:(id)arg1;
- (void)setIdentifierURIPathComponent:(id)arg1;
- (void)setManagedObjectID:(id)arg1;
- (void)setParentTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
