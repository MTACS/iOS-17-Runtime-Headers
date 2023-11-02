
@interface PromotedContent.SearchLandingPageRepresentation : APPCContentRepresentation {
    void adamId;
    void appMetadata;
    void clientRequestId;
    void cppIds;
    void deploymentId;
    void experimentId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  iAdId;
    void impressionId;
    void installAttribution;
    void journeyRelayAdGroupId;
    void journeyRelayCampaignId;
    void metadata;
    void odmlSuccess;
    void parentAppCheckEnabled;
    void positionInformation;
    void rank;
    void slotNumber;
    void storeFront;
    void storeFrontLocale;
    void timeToDisplay;
    void treatmentId;
}

- (void).cxx_destruct;

@end
