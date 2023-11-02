
@interface WFTrelloBoard : WFTrelloObject {
    NSURL * _URL;
    bool  _closed;
    NSString * _itemDescription;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) bool closed;
@property (nonatomic, readonly) NSString *itemDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)closedJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (bool)closed;
- (id)itemDescription;

@end
