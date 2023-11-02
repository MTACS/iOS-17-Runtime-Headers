
@interface FBKFeedbackStatus : FBKManagedFeedbackObject

@property (nonatomic, readonly) NSAttributedString *attributedStringRepresentation;
@property (nonatomic, retain) FBKFeedback *feedback;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) NSArray *orderedKeys;
@property (nonatomic, readonly) FBKQuestionGroupStub *questionGroupStubRepresentation;
@property (nonatomic, copy) NSNumber *remoteID;
@property (nonatomic, retain) NSDictionary *statusPairs;
@property (nonatomic, copy) NSDate *updatedAt;

+ (id)entityName;
+ (id)fetchRequest;

- (id)attributedStringRepresentation;
- (bool)isEmpty;
- (id)questionGroupStubRepresentation;
- (void)setPropertiesFromJSONObject:(id)arg1;

@end
