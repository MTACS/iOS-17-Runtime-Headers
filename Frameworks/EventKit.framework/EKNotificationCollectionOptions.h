
@interface EKNotificationCollectionOptions : NSObject {
    NSString * _externalID;
    NSString * _externalIDTag;
    EKSource * _source;
}

@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) NSString *externalIDTag;
@property (nonatomic, readonly) EKSource *source;

- (void).cxx_destruct;
- (id)description;
- (id)externalID;
- (id)externalIDTag;
- (id)initWithExternalID:(id)arg1 externalIDTag:(id)arg2 inSource:(id)arg3;
- (id)source;

@end
