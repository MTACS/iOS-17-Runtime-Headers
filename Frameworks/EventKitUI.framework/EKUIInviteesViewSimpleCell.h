
@interface EKUIInviteesViewSimpleCell : UITableViewCell {
    NSArray * _persistentConstraints;
    NSString * _simpleText;
    UILabel * _simpleTextLabel;
}

@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) NSString *simpleText;
@property (nonatomic, retain) UILabel *simpleTextLabel;

+ (id)_simpleTextLabelFont;
+ (long long)accessoryType;
+ (id)labelText;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isCentered;
- (id)persistentConstraints;
- (void)setPersistentConstraints:(id)arg1;
- (void)setSimpleText:(id)arg1;
- (void)setSimpleTextLabel:(id)arg1;
- (id)simpleText;
- (id)simpleTextLabel;
- (void)updateConstraints;

@end
