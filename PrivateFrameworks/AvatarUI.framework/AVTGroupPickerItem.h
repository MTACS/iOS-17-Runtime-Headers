
@interface AVTGroupPickerItem : NSObject {
    NSString * _localizedName;
    id /* block */  _symbolNameProvider;
}

@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) id /* block */ symbolNameProvider;

- (void).cxx_destruct;
- (id)initWithLocalizedName:(id)arg1 symbolNameProvider:(id /* block */)arg2;
- (id)localizedName;
- (id /* block */)symbolNameProvider;

@end
