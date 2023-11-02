
@interface ICASCollaborationStatus : NSObject <AADataType> {
    long long  _collaborationStatus;
}

@property (nonatomic, readonly) long long collaborationStatus;

- (long long)collaborationStatus;
- (id)initWithCollaborationStatus:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
