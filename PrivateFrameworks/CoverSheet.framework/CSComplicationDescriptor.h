
@interface CSComplicationDescriptor : NSObject <NSCopying> {
    bool  _blockedForScreenTimeExpiration;
    CHSWidgetMetrics * _metrics;
    NSString * _uniqueIdentifier;
    CHSWidget * _widget;
}

@property (getter=isBlockedForScreenTimeExpiration, nonatomic, readonly) bool blockedForScreenTimeExpiration;
@property (nonatomic, readonly) CHSWidgetMetrics *metrics;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) CHSWidget *widget;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptorBlockedForScreenTimeExpiration:(bool)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 widget:(id)arg2 metrics:(id)arg3 blockedForScreenTimeExpiration:(bool)arg4;
- (bool)isBlockedForScreenTimeExpiration;
- (bool)isEqual:(id)arg1;
- (id)layoutElementForDisplayScale:(double)arg1;
- (id)metrics;
- (id)uniqueIdentifier;
- (id)widget;

@end
