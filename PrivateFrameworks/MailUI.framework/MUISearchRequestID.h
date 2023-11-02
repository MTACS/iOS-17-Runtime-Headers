
@interface MUISearchRequestID : NSObject {
    unsigned int  _underlying;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToID:(id)arg1;

@end
