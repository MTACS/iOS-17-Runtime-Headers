
@interface ASFAsn1ReceiptIAPToken : NSObject {
    ASFAsn1Token * mContentToken;
    unsigned long long  mType;
    unsigned long long  mTypeVersion;
}

- (void).cxx_destruct;
- (id)description;

@end
