
@interface WFTrelloCard : WFTrelloObject {
    NSURL * _URL;
    NSNumber * _creationPosition;
    NSDate * _dueDate;
    NSString * _itemDescription;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSNumber *creationPosition;
@property (nonatomic, readonly) NSDate *dueDate;
@property (nonatomic, readonly) NSString *itemDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dueDateJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)creationPosition;
- (id)dueDate;
- (id)itemDescription;

@end
