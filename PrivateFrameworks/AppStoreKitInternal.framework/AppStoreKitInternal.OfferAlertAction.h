
@interface AppStoreKitInternal.OfferAlertAction : AppStoreKitInternal.Action {
    void checkRestrictionsForContentRating;
    void completionAction;
    void footerMessage;
    void isCancelable;
    void message;
    void remoteControllerRequirement;
    void shouldCheckForAvailableDiskSpace;
    void shouldIncludeActiveAccountInFooterMessage;
    void shouldPromptForConfirmation;
}

@end
