
@interface ICASNoteAccessData : NSObject <AADataEventType> {
    ICASCollaborationStatus * _collaborationStatus;
    ICASCollaborationType * _collaborationType;
    NSNumber * _isPasswordProtected;
    NSNumber * _isPinned;
}

@property (nonatomic, readonly) ICASCollaborationStatus *collaborationStatus;
@property (nonatomic, readonly) ICASCollaborationType *collaborationType;
@property (nonatomic, readonly) NSNumber *isPasswordProtected;
@property (nonatomic, readonly) NSNumber *isPinned;

+ (id)dataName;

- (void).cxx_destruct;
- (id)collaborationStatus;
- (id)collaborationType;
- (id)initWithIsPasswordProtected:(id)arg1 isPinned:(id)arg2 collaborationStatus:(id)arg3 collaborationType:(id)arg4;
- (id)isPasswordProtected;
- (id)isPinned;
- (id)toDict;

@end
