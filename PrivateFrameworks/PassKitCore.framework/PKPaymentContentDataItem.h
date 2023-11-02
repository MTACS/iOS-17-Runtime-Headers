
@interface PKPaymentContentDataItem : PKPaymentDataItem {
    PKPaymentContentItem * _contentItem;
}

@property (nonatomic, readonly) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (bool)supportsMultipleItems;

- (void).cxx_destruct;
- (id)contentItem;
- (long long)context;
- (id)initWithContentItem:(id)arg1;
- (bool)isValidWithError:(id*)arg1;

@end
