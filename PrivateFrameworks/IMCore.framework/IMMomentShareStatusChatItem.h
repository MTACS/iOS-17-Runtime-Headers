
@interface IMMomentShareStatusChatItem : IMTranscriptChatItem {
    NSString * _activityTitle;
    NSDate * _expirationDate;
}

@property (nonatomic, readonly, copy) NSString *activityTitle;
@property (nonatomic, readonly, copy) NSDate *expirationDate;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)_guidForItem:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 activityTitle:(id)arg2 expirationDate:(id)arg3;
- (bool)_isEqualToGuid:(id)arg1 activityTitle:(id)arg2 expirationDate:(id)arg3;
- (id)activityTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)expirationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)wouldBeEqualIfInitializedWithItem:(id)arg1 activityTitle:(id)arg2 expirationDate:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
