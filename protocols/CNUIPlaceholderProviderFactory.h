
@protocol CNUIPlaceholderProviderFactory <NSObject>

@required

- (<CNUIPRLikenessProvider> *)loadingGroupPlaceholderProviderWithBackgroundStyle:(unsigned long long)arg1;
- (<CNUIPRLikenessProvider> *)loadingPlaceholderProvider;
- (<CNUIPRLikenessProvider> *)placeholderProvider;
- (<CNUIPRLikenessProvider> *)placeholderProviderForContact:(CNContact *)arg1;

@end
