
@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding> {
    bool  _isInCanvas;
    unsigned long long  _participantIdentifier;
    NSNumber * _prominence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _spatialPosition;
    unsigned long long  _videoQuality;
    NSNumber * _visibility;
}

@property (nonatomic, readonly) bool isInCanvas;
@property (nonatomic, readonly) unsigned long long participantIdentifier;
@property (nonatomic, readonly) NSNumber *prominence;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } spatialPosition;
@property (nonatomic, readonly) unsigned long long videoQuality;
@property (nonatomic, readonly) NSNumber *visibility;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipantIdentifier:(unsigned long long)arg1 videoQuality:(unsigned long long)arg2 visibility:(id)arg3 prominence:(id)arg4 spatialPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 isInCanvas:(bool)arg6;
- (bool)isInCanvas;
- (unsigned long long)participantIdentifier;
- (id)prominence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })spatialPosition;
- (unsigned long long)videoQuality;
- (id)visibility;

@end
