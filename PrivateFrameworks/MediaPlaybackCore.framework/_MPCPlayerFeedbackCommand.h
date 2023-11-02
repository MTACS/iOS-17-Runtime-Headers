
@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand <MPCPlayerFeedbackCommand> {
    unsigned int  _command;
    MPModelObject * _favoritableModelObject;
    bool  _isDislikingFavoritableModelObject;
    NSString * _localizedShortTitle;
    NSString * _localizedTitle;
    long long  _presentationStyle;
    bool  _value;
}

@property (nonatomic, readonly) unsigned int command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MPModelObject *favoritableModelObject;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDislikingFavoritableModelObject;
@property (nonatomic, copy) NSString *localizedShortTitle;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool value;

- (void).cxx_destruct;
- (id)changeValue:(bool)arg1;
- (unsigned int)command;
- (id)favoritableModelObject;
- (id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned int)arg2;
- (bool)isDislikingFavoritableModelObject;
- (id)localizedShortTitle;
- (id)localizedTitle;
- (long long)presentationStyle;
- (void)setFavoritableModelObject:(id)arg1;
- (void)setIsDislikingFavoritableModelObject:(bool)arg1;
- (void)setLocalizedShortTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
