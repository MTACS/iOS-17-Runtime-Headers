
@interface _UNNotificationContactServiceMatchDetails : NSObject {
    NSString * _cnContactFullname;
    NSString * _cnContactIdentifier;
    bool  _isSuggestedMatch;
}

@property (nonatomic, copy) NSString *cnContactFullname;
@property (nonatomic, copy) NSString *cnContactIdentifier;
@property (nonatomic) bool isSuggestedMatch;

- (void).cxx_destruct;
- (id)cnContactFullname;
- (id)cnContactIdentifier;
- (id)initWithCnContactIdentifier:(id)arg1 cnContactFullname:(id)arg2 isSuggestedContact:(bool)arg3;
- (bool)isSuggestedMatch;
- (void)setCnContactFullname:(id)arg1;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setIsSuggestedMatch:(bool)arg1;

@end
