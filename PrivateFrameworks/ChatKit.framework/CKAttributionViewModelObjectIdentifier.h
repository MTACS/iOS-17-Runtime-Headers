
@interface CKAttributionViewModelObjectIdentifier : NSObject <NSCopying> {
    long long  _associatedMessageType;
}

@property (nonatomic, readonly) long long associatedMessageType;

- (long long)associatedMessageType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAssociatedMessageType:(long long)arg1;
- (bool)isEqual:(id)arg1;

@end
