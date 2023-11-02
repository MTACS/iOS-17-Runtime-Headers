
@interface WFEDAMSharedNotebook : NSObject <NSSecureCoding> {
    NSString * _notebookGuid;
}

@property (nonatomic, retain) NSString *notebookGuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)notebookGuid;
- (void)setNotebookGuid:(id)arg1;

@end
