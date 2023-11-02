
@interface TUICFQueryResult : NSObject {
    bool  _allowCallForDestinationID;
    bool  _fromBlockList;
}

@property (nonatomic) bool allowCallForDestinationID;
@property (getter=isFromBlockList, nonatomic) bool fromBlockList;

- (bool)allowCallForDestinationID;
- (id)description;
- (bool)isFromBlockList;
- (void)setAllowCallForDestinationID:(bool)arg1;
- (void)setFromBlockList:(bool)arg1;

@end
