
@interface PXCNRecipientSearchResult : PXCNComposeRecipient <PXRecipientSearchResult> {
    long long  _validationType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long validationType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setValidationType:(long long)arg1;
- (long long)validationType;

@end
