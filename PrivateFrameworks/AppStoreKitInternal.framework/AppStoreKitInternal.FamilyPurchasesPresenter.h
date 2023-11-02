
@interface AppStoreKitInternal.FamilyPurchasesPresenter : AppStoreKitInternal.BasePresenter {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bag;
    void familyMembers;
    void familyPurchasesError;
    void iCloudMemberAppleId;
    void imagesForFamilyMembers;
    void loggedInUser;
    void sections;
    void view;
}

- (void)profilePictureStoreDidChange;

@end
