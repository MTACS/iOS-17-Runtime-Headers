
@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSData * _accessToken;
    bool  _allowAccess;
    BRCDocumentItem * _document;
    NSString * _referenceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithItem:(id)arg1 allowAccess:(bool)arg2;
- (void)main;

@end
