
@interface EKExceptionDateChange : EKObjectChange <EKOwnerIDProviding> {
    NSDate * _date;
    EKObjectID * _ownerID;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)date;
- (id)initWithChangeProperties:(id)arg1;
- (id)ownerID;
- (id)owningEventInEventStore:(id)arg1;

@end
