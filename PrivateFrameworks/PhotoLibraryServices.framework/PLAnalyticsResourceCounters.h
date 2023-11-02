
@interface PLAnalyticsResourceCounters : NSObject {
    _Atomic unsigned long long  countOfAssetsSupportingCloudUpload;
    _Atomic unsigned long long  countOfAssetsWithAllThumbs;
    _Atomic unsigned long long  countOfAssetsWithCPLMediumLocallyAvailable;
    _Atomic unsigned long long  countOfAssetsWithMediumOrOriginalLocallyAvailable;
    _Atomic unsigned long long  countOfAssetsWithOriginalResourceLocal;
    _Atomic unsigned long long  countOfImageAssetsSupportingCloudUpload;
    _Atomic unsigned long long  countOfImageAssetsWithMediumOrOriginalLocallyAvailable;
    _Atomic unsigned long long  countOfMediumOriginalLocallyAvailableCloudResources;
    _Atomic unsigned long long  countOfMediumOriginalLocallyUnavailableCloudResources;
    _Atomic unsigned long long  countOfPersonalLibraryAssets;
    _Atomic unsigned long long  countOfResourcesPurgedInTheLastDay;
    _Atomic unsigned long long  countOfResourcesPurgedInTheLastMonth;
    _Atomic unsigned long long  countOfResourcesPurgedInTheLastWeek;
    _Atomic unsigned long long  countOfResourcesPurgedWithinDayOfPrefetch;
    _Atomic unsigned long long  countOfResourcesPurgedWithinMonthOfPrefetch;
    _Atomic unsigned long long  countOfResourcesPurgedWithinWeekOfPrefetch;
    _Atomic unsigned long long  countOfSharedLibraryAssets;
    _Atomic unsigned long long  countOfSharedLibraryAssetsAddedInCamera;
    _Atomic unsigned long long  countOfSharedLibraryAssetsAddedInSuggestions;
    _Atomic unsigned long long  countOfSharedLibraryAssetsAddedManually;
    _Atomic unsigned long long  countOfVideoAssetsSupportingCloudUpload;
    _Atomic unsigned long long  countOfVideoAssetsWithMediumOrOriginalLocallyAvailable;
    _Atomic unsigned long long  sizeOfResourcesPurgedInTheLastDay;
    _Atomic unsigned long long  sizeOfResourcesPurgedInTheLastMonth;
    _Atomic unsigned long long  sizeOfResourcesPurgedInTheLastWeek;
}

@end
