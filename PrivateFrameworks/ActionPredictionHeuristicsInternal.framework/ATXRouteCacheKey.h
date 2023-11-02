
@interface ATXRouteCacheKey : NSObject <NSCopying> {
    NSString * destinationLocation;
    bool  localOnlyAfterFirstUpdate;
    NSString * transportType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
