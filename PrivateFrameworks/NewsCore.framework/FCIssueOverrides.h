
@interface FCIssueOverrides : NSObject <NSCopying> {
    NSString * _issueDescription;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *issueDescription;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 issueDescription:(id)arg2;
- (id)issueDescription;
- (id)title;

@end
