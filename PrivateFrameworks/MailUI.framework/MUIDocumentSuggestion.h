
@interface MUIDocumentSuggestion : MUIResultSuggestion {
    NSDate * _date;
    NSURL * _fileURL;
    NSString * _name;
    NSString * _subject;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *subject;

+ (id)suggestionWithFileURL:(id)arg1 name:(id)arg2 date:(id)arg3 subject:(id)arg4 authors:(id)arg5 authorEmailAddresses:(id)arg6 objectID:(id)arg7 messageList:(id)arg8;

- (void).cxx_destruct;
- (id)category;
- (id)date;
- (id)description;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 name:(id)arg2 date:(id)arg3 subject:(id)arg4 authors:(id)arg5 authorEmailAddresses:(id)arg6 objectID:(id)arg7 messageList:(id)arg8;
- (id)name;
- (id)subject;

@end
