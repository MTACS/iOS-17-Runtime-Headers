
@interface SHSheetContentUpdateNotification : BSAction

@property (nonatomic, readonly) bool didUpdateDataSource;
@property (nonatomic, readonly) LPLinkMetadata *headerMetadata;

- (bool)didUpdateDataSource;
- (id)headerMetadata;
- (id)initWithHeaderMetadata:(id)arg1 didUpdateDataSource:(bool)arg2;

@end
