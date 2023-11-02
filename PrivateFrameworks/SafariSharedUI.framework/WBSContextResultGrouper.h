
@interface WBSContextResultGrouper : NSObject {
    unsigned long long  _minimumNumberOfItemsRequiredInGroup;
}

@property (nonatomic) unsigned long long minimumNumberOfItemsRequiredInGroup;

- (id)groupItems:(id)arg1;
- (id)init;
- (unsigned long long)minimumNumberOfItemsRequiredInGroup;
- (void)setMinimumNumberOfItemsRequiredInGroup:(unsigned long long)arg1;

@end
