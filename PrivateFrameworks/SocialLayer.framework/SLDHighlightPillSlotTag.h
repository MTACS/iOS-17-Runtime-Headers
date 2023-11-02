
@interface SLDHighlightPillSlotTag : SLDSlotTag <NSCopying, NSSecureCoding> {
    NSNumber * _allSendersNumber;
    NSString * _groupID;
    NSString * _groupName;
    NSURL * _groupPhotoPath;
    double  _maxWidth;
    SLPerson * _meSender;
    SLPerson * _pinnedSender;
    NSArray * _sendersToDisplay;
    unsigned long long  _variant;
    NSNumber * _widthNumber;
}

@property (nonatomic, readonly) unsigned long long allSendersCount;
@property (nonatomic) NSNumber *allSendersNumber;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, retain) NSURL *groupPhotoPath;
@property (nonatomic, readonly) unsigned long long maxPossibleImageCount;
@property (nonatomic) double maxWidth;
@property (nonatomic, retain) SLPerson *meSender;
@property (nonatomic, retain) SLPerson *pinnedSender;
@property (nonatomic, retain) NSArray *sendersToDisplay;
@property (nonatomic) unsigned long long variant;
@property (nonatomic, retain) NSNumber *widthNumber;

+ (bool)supportsSecureCoding;
+ (id)tagForHighlightAttributions:(id)arg1 maxWidth:(double)arg2 maxSendersToDisplay:(unsigned long long)arg3 variant:(unsigned long long)arg4;

- (void).cxx_destruct;
- (void)_generateCollaborationSendersForMultipleAttributions:(id)arg1 maxSendersToDisplay:(unsigned long long)arg2;
- (void)_generateCollaborationSendersForSingleAttribution:(id)arg1 maxSendersToDisplay:(unsigned long long)arg2;
- (void)_generateSendersWithDisplayPolicyForAttributions:(id)arg1 maxSendersToDisplay:(unsigned long long)arg2;
- (id)_personOtherThanPerson:(id)arg1 inArray:(id)arg2;
- (unsigned long long)allSendersCount;
- (id)allSendersNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)groupName;
- (id)groupPhotoPath;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlightAttributions:(id)arg1 maxWidth:(double)arg2 maxSendersToDisplay:(unsigned long long)arg3 variant:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxPossibleImageCount;
- (double)maxWidth;
- (id)meSender;
- (id)pinnedSender;
- (id)resolvedStyleForStyle:(id)arg1;
- (id)sendersToDisplay;
- (void)setAllSendersNumber:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupPhotoPath:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setMeSender:(id)arg1;
- (void)setPinnedSender:(id)arg1;
- (void)setSendersToDisplay:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (void)setWidthNumber:(id)arg1;
- (unsigned long long)variant;
- (id)widthNumber;

@end
