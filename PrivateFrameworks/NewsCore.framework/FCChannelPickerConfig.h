
@interface FCChannelPickerConfig : NSObject {
    NSString * _buttonTitle;
    NSString * _featureName;
    FCContentColorPair * _featureTextColor;
    NSArray * _initialChannelIDs;
    NSString * _pickerID;
    bool  _showRelatedChannels;
    NSString * _titleText;
}

@property (nonatomic, readonly) NSString *buttonTitle;
@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) FCContentColorPair *featureTextColor;
@property (nonatomic, readonly, copy) NSArray *initialChannelIDs;
@property (nonatomic, readonly) NSString *pickerID;
@property (nonatomic, readonly) bool showRelatedChannels;
@property (nonatomic, readonly) NSString *titleText;

- (void).cxx_destruct;
- (id)buttonTitle;
- (id)featureName;
- (id)featureTextColor;
- (id)initWithPickerID:(id)arg1 configDictionary:(id)arg2;
- (id)initialChannelIDs;
- (id)pickerID;
- (bool)showRelatedChannels;
- (id)titleText;

@end
