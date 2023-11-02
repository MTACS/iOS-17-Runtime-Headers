
@interface CPLFeedbackMessage : NSObject {
    NSDate * _creationDate;
    NSString * _feedbackType;
    NSString * _libraryIdentifier;
}

@property (nonatomic, readonly) NSString *feedbackType;
@property (nonatomic, readonly) NSString *libraryIdentifier;
@property (nonatomic, readonly) NSString *libraryIdentifierDescription;
@property (nonatomic, readonly) CPLServerFeedbackMessage *serverMessage;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)feedbackType;
- (id)initWithLibraryIdentifier:(id)arg1;
- (id)libraryIdentifier;
- (id)libraryIdentifierDescription;
- (id)serverMessage;

@end
