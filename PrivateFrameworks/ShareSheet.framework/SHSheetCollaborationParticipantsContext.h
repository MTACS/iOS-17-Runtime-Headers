
@interface SHSheetCollaborationParticipantsContext : NSObject {
    NSString * _confirmButtonText;
    NSString * _headerTitle;
    NSString * _loadingText;
    NSString * _supplementaryText;
}

@property (nonatomic, readonly, copy) NSString *confirmButtonText;
@property (nonatomic, readonly, copy) NSString *headerTitle;
@property (nonatomic, readonly, copy) NSString *loadingText;
@property (nonatomic, readonly, copy) NSString *supplementaryText;

+ (id)defaultContext;

- (void).cxx_destruct;
- (id)confirmButtonText;
- (id)headerTitle;
- (id)initWithHeaderTitle:(id)arg1 supplementaryText:(id)arg2 confirmButtonText:(id)arg3 loadingText:(id)arg4;
- (id)loadingText;
- (id)supplementaryText;

@end
