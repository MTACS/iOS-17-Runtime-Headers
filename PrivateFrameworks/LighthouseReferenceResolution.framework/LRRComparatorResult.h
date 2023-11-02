
@interface LRRComparatorResult : NSObject {
    int  _comparatorName;
    bool  _isMatched;
    bool  _isValidOriginalItem;
    bool  _isValidReplayedItem;
}

@property (nonatomic, readonly) int comparatorName;
@property (nonatomic) bool isMatched;
@property (nonatomic) bool isValidOriginalItem;
@property (nonatomic) bool isValidReplayedItem;

- (int)comparatorName;
- (id)initWithComparatorName:(int)arg1;
- (bool)isMatched;
- (bool)isValidOriginalItem;
- (bool)isValidReplayedItem;
- (void)setIsMatched:(bool)arg1;
- (void)setIsValidOriginalItem:(bool)arg1;
- (void)setIsValidReplayedItem:(bool)arg1;

@end
