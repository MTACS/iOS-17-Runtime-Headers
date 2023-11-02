
@interface ASFAsn1Token : NSObject {
    unsigned char  mClass;
    NSData * mData;
    unsigned long long  mIdentifier;
}

- (void).cxx_destruct;
- (id)description;

@end
